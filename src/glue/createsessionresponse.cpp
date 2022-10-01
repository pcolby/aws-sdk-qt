// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsessionresponse.h"
#include "createsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateSessionResponse
 * \brief The CreateSessionResponse class provides an interace for Glue CreateSession responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createSession
 */

/*!
 * Constructs a CreateSessionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSessionResponse::CreateSessionResponse(
        const CreateSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateSessionResponsePrivate(this), parent)
{
    setRequest(new CreateSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSessionRequest * CreateSessionResponse::request() const
{
    Q_D(const CreateSessionResponse);
    return static_cast<const CreateSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateSession \a response.
 */
void CreateSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateSessionResponsePrivate
 * \brief The CreateSessionResponsePrivate class provides private implementation for CreateSessionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateSessionResponsePrivate object with public implementation \a q.
 */
CreateSessionResponsePrivate::CreateSessionResponsePrivate(
    CreateSessionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateSession response element from \a xml.
 */
void CreateSessionResponsePrivate::parseCreateSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
