/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "selectaggregateresourceconfigresponse.h"
#include "selectaggregateresourceconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::SelectAggregateResourceConfigResponse
 * \brief The SelectAggregateResourceConfigResponse class provides an interace for ConfigService SelectAggregateResourceConfig responses.
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
 * \sa ConfigServiceClient::selectAggregateResourceConfig
 */

/*!
 * Constructs a SelectAggregateResourceConfigResponse object for \a reply to \a request, with parent \a parent.
 */
SelectAggregateResourceConfigResponse::SelectAggregateResourceConfigResponse(
        const SelectAggregateResourceConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new SelectAggregateResourceConfigResponsePrivate(this), parent)
{
    setRequest(new SelectAggregateResourceConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SelectAggregateResourceConfigRequest * SelectAggregateResourceConfigResponse::request() const
{
    Q_D(const SelectAggregateResourceConfigResponse);
    return static_cast<const SelectAggregateResourceConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConfigService SelectAggregateResourceConfig \a response.
 */
void SelectAggregateResourceConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SelectAggregateResourceConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConfigService::SelectAggregateResourceConfigResponsePrivate
 * \brief The SelectAggregateResourceConfigResponsePrivate class provides private implementation for SelectAggregateResourceConfigResponse.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a SelectAggregateResourceConfigResponsePrivate object with public implementation \a q.
 */
SelectAggregateResourceConfigResponsePrivate::SelectAggregateResourceConfigResponsePrivate(
    SelectAggregateResourceConfigResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/*!
 * Parses a ConfigService SelectAggregateResourceConfig response element from \a xml.
 */
void SelectAggregateResourceConfigResponsePrivate::parseSelectAggregateResourceConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SelectAggregateResourceConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConfigService
} // namespace QtAws
