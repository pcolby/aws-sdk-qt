// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetriggerresponse.h"
#include "deletetriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTriggerResponse
 * \brief The DeleteTriggerResponse class provides an interace for Glue DeleteTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteTrigger
 */

/*!
 * Constructs a DeleteTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTriggerResponse::DeleteTriggerResponse(
        const DeleteTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteTriggerResponsePrivate(this), parent)
{
    setRequest(new DeleteTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTriggerRequest * DeleteTriggerResponse::request() const
{
    Q_D(const DeleteTriggerResponse);
    return static_cast<const DeleteTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteTrigger \a response.
 */
void DeleteTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteTriggerResponsePrivate
 * \brief The DeleteTriggerResponsePrivate class provides private implementation for DeleteTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteTriggerResponsePrivate object with public implementation \a q.
 */
DeleteTriggerResponsePrivate::DeleteTriggerResponsePrivate(
    DeleteTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteTrigger response element from \a xml.
 */
void DeleteTriggerResponsePrivate::parseDeleteTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTriggerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
