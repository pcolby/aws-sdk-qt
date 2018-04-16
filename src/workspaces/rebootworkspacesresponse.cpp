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

#include "rebootworkspacesresponse.h"
#include "rebootworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RebootWorkspacesResponse
 *
 * \brief The RebootWorkspacesResponse class encapsulates WorkSpaces RebootWorkspaces responses.
 *
 * \ingroup WorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::rebootWorkspaces
 */

/*!
 * @brief  Constructs a new RebootWorkspacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootWorkspacesResponse::RebootWorkspacesResponse(
        const RebootWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new RebootWorkspacesResponsePrivate(this), parent)
{
    setRequest(new RebootWorkspacesRequest(request));
    setReply(reply);
}

const RebootWorkspacesRequest * RebootWorkspacesResponse::request() const
{
    Q_D(const RebootWorkspacesResponse);
    return static_cast<const RebootWorkspacesRequest *>(d->request);
}

/*!
 * @brief  Parse a WorkSpaces RebootWorkspaces response.
 *
 * @param  response  Response to parse.
 */
void RebootWorkspacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(RebootWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class RebootWorkspacesResponsePrivate
 *
 * \brief Private implementation for RebootWorkspacesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RebootWorkspacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootWorkspacesResponse instance.
 */
RebootWorkspacesResponsePrivate::RebootWorkspacesResponsePrivate(
    RebootWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WorkSpaces RebootWorkspacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootWorkspacesResponsePrivate::parseRebootWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootWorkspacesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
