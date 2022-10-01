// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putstoredqueryresponse.h"
#include "putstoredqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::PutStoredQueryResponse
 * \brief The PutStoredQueryResponse class provides an interace for ConfigService PutStoredQuery responses.
 *
 * \inmodule QtAwsConfigService
 *
 *  <fullname>Config</fullname>
 * 
 *  Config provides a way to keep track of the configurations of all the Amazon Web Services resources associated with your
 *  Amazon Web Services account. You can use Config to get the current and historical configurations of each Amazon Web
 *  Services resource and also to get information about the relationship between the resources. An Amazon Web Services
 *  resource can be an Amazon Compute Cloud (Amazon EC2) instance, an Elastic Block Store (EBS) volume, an elastic network
 *  Interface (ENI), or a security group. For a complete list of resources currently supported by Config, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  Amazon Web Services
 * 
 *  resources</a>>
 * 
 *  You can access and manage Config through the Amazon Web Services Management Console, the Amazon Web Services Command
 *  Line Interface (Amazon Web Services CLI), the Config API, or the Amazon Web Services SDKs for Config. This reference
 *  guide contains documentation for the Config API and the Amazon Web Services CLI commands that you can use to manage
 *  Config. The Config API uses the Signature Version 4 protocol for signing requests. For more information about how to
 *  sign a request with this protocol, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about Config features and their associated actions or commands, as well as how to work with
 *  Amazon Web Services Management Console, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is Config</a> in the <i>Config
 *  Developer
 *
 * \sa ConfigServiceClient::putStoredQuery
 */

/*!
 * Constructs a PutStoredQueryResponse object for \a reply to \a request, with parent \a parent.
 */
PutStoredQueryResponse::PutStoredQueryResponse(
        const PutStoredQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new PutStoredQueryResponsePrivate(this), parent)
{
    setRequest(new PutStoredQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutStoredQueryRequest * PutStoredQueryResponse::request() const
{
    Q_D(const PutStoredQueryResponse);
    return static_cast<const PutStoredQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConfigService PutStoredQuery \a response.
 */
void PutStoredQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutStoredQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConfigService::PutStoredQueryResponsePrivate
 * \brief The PutStoredQueryResponsePrivate class provides private implementation for PutStoredQueryResponse.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a PutStoredQueryResponsePrivate object with public implementation \a q.
 */
PutStoredQueryResponsePrivate::PutStoredQueryResponsePrivate(
    PutStoredQueryResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/*!
 * Parses a ConfigService PutStoredQuery response element from \a xml.
 */
void PutStoredQueryResponsePrivate::parsePutStoredQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutStoredQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConfigService
} // namespace QtAws
