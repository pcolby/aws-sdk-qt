// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getblockpublicaccessconfigurationresponse.h"
#include "getblockpublicaccessconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::GetBlockPublicAccessConfigurationResponse
 * \brief The GetBlockPublicAccessConfigurationResponse class provides an interace for Emr GetBlockPublicAccessConfiguration responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getBlockPublicAccessConfiguration
 */

/*!
 * Constructs a GetBlockPublicAccessConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBlockPublicAccessConfigurationResponse::GetBlockPublicAccessConfigurationResponse(
        const GetBlockPublicAccessConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new GetBlockPublicAccessConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBlockPublicAccessConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBlockPublicAccessConfigurationRequest * GetBlockPublicAccessConfigurationResponse::request() const
{
    Q_D(const GetBlockPublicAccessConfigurationResponse);
    return static_cast<const GetBlockPublicAccessConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr GetBlockPublicAccessConfiguration \a response.
 */
void GetBlockPublicAccessConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBlockPublicAccessConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::GetBlockPublicAccessConfigurationResponsePrivate
 * \brief The GetBlockPublicAccessConfigurationResponsePrivate class provides private implementation for GetBlockPublicAccessConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a GetBlockPublicAccessConfigurationResponsePrivate object with public implementation \a q.
 */
GetBlockPublicAccessConfigurationResponsePrivate::GetBlockPublicAccessConfigurationResponsePrivate(
    GetBlockPublicAccessConfigurationResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr GetBlockPublicAccessConfiguration response element from \a xml.
 */
void GetBlockPublicAccessConfigurationResponsePrivate::parseGetBlockPublicAccessConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlockPublicAccessConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
