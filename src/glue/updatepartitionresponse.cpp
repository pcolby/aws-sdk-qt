// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
