// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhitresponse.h"
#include "createhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITResponse
 * \brief The CreateHITResponse class provides an interace for MTurk CreateHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHIT
 */

/*!
 * Constructs a CreateHITResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHITResponse::CreateHITResponse(
        const CreateHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateHITResponsePrivate(this), parent)
{
    setRequest(new CreateHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHITRequest * CreateHITResponse::request() const
{
    Q_D(const CreateHITResponse);
    return static_cast<const CreateHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk CreateHIT \a response.
 */
void CreateHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::CreateHITResponsePrivate
 * \brief The CreateHITResponsePrivate class provides private implementation for CreateHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITResponsePrivate object with public implementation \a q.
 */
CreateHITResponsePrivate::CreateHITResponsePrivate(
    CreateHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk CreateHIT response element from \a xml.
 */
void CreateHITResponsePrivate::parseCreateHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
