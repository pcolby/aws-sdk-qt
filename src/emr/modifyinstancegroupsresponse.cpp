/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modifyinstancegroupsresponse.h"
#include "modifyinstancegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ModifyInstanceGroupsResponse
 * \brief The ModifyInstanceGroupsResponse class provides an interace for EMR ModifyInstanceGroups responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::modifyInstanceGroups
 */

/*!
 * Constructs a ModifyInstanceGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyInstanceGroupsResponse::ModifyInstanceGroupsResponse(
        const ModifyInstanceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ModifyInstanceGroupsResponsePrivate(this), parent)
{
    setRequest(new ModifyInstanceGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyInstanceGroupsRequest * ModifyInstanceGroupsResponse::request() const
{
    Q_D(const ModifyInstanceGroupsResponse);
    return static_cast<const ModifyInstanceGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR ModifyInstanceGroups \a response.
 */
void ModifyInstanceGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyInstanceGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ModifyInstanceGroupsResponsePrivate
 * \brief The ModifyInstanceGroupsResponsePrivate class provides private implementation for ModifyInstanceGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ModifyInstanceGroupsResponsePrivate object with public implementation \a q.
 */
ModifyInstanceGroupsResponsePrivate::ModifyInstanceGroupsResponsePrivate(
    ModifyInstanceGroupsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ModifyInstanceGroups response element from \a xml.
 */
void ModifyInstanceGroupsResponsePrivate::parseModifyInstanceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceGroupsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
