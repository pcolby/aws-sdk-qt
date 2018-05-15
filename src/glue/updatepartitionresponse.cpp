/*
    Copyright 2013-2018 Paul Colby

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

#include "updatepartitionresponse.h"
#include "updatepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdatePartitionResponse
 * \brief The UpdatePartitionResponse class provides an interace for Glue UpdatePartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updatePartition
 */

/*!
 * Constructs a UpdatePartitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePartitionResponse::UpdatePartitionResponse(
        const UpdatePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdatePartitionResponsePrivate(this), parent)
{
    setRequest(new UpdatePartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePartitionRequest * UpdatePartitionResponse::request() const
{
    Q_D(const UpdatePartitionResponse);
    return static_cast<const UpdatePartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdatePartition \a response.
 */
void UpdatePartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdatePartitionResponsePrivate
 * \brief The UpdatePartitionResponsePrivate class provides private implementation for UpdatePartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdatePartitionResponsePrivate object with public implementation \a q.
 */
UpdatePartitionResponsePrivate::UpdatePartitionResponsePrivate(
    UpdatePartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdatePartition response element from \a xml.
 */
void UpdatePartitionResponsePrivate::parseUpdatePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePartitionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
