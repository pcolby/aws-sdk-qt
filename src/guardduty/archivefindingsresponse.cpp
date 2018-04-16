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

#include "archivefindingsresponse.h"
#include "archivefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ArchiveFindingsResponse
 *
 * \brief The ArchiveFindingsResponse class encapsulates GuardDuty ArchiveFindings responses.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::archiveFindings
 */

/*!
 * @brief  Constructs a new ArchiveFindingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ArchiveFindingsResponse::ArchiveFindingsResponse(
        const ArchiveFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ArchiveFindingsResponsePrivate(this), parent)
{
    setRequest(new ArchiveFindingsRequest(request));
    setReply(reply);
}

const ArchiveFindingsRequest * ArchiveFindingsResponse::request() const
{
    Q_D(const ArchiveFindingsResponse);
    return static_cast<const ArchiveFindingsRequest *>(d->request);
}

/*!
 * @brief  Parse a GuardDuty ArchiveFindings response.
 *
 * @param  response  Response to parse.
 */
void ArchiveFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ArchiveFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ArchiveFindingsResponsePrivate
 *
 * \brief Private implementation for ArchiveFindingsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ArchiveFindingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ArchiveFindingsResponse instance.
 */
ArchiveFindingsResponsePrivate::ArchiveFindingsResponsePrivate(
    ArchiveFindingsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * @brief  Parse an GuardDuty ArchiveFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ArchiveFindingsResponsePrivate::parseArchiveFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ArchiveFindingsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
