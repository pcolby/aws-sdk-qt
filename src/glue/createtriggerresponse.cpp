// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtriggerresponse.h"
#include "createtriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateTriggerResponse
 * \brief The CreateTriggerResponse class provides an interace for Glue CreateTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createTrigger
 */

/*!
 * Constructs a CreateTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTriggerResponse::CreateTriggerResponse(
        const CreateTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateTriggerResponsePrivate(this), parent)
{
    setRequest(new CreateTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTriggerRequest * CreateTriggerResponse::request() const
{
    Q_D(const CreateTriggerResponse);
    return static_cast<const CreateTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateTrigger \a response.
 */
void CreateTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateTriggerResponsePrivate
 * \brief The CreateTriggerResponsePrivate class provides private implementation for CreateTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateTriggerResponsePrivate object with public implementation \a q.
 */
CreateTriggerResponsePrivate::CreateTriggerResponsePrivate(
    CreateTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateTrigger response element from \a xml.
 */
void CreateTriggerResponsePrivate::parseCreateTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTriggerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
