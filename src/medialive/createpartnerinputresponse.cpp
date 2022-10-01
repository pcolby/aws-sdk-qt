// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpartnerinputresponse.h"
#include "createpartnerinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreatePartnerInputResponse
 * \brief The CreatePartnerInputResponse class provides an interace for MediaLive CreatePartnerInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createPartnerInput
 */

/*!
 * Constructs a CreatePartnerInputResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePartnerInputResponse::CreatePartnerInputResponse(
        const CreatePartnerInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreatePartnerInputResponsePrivate(this), parent)
{
    setRequest(new CreatePartnerInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePartnerInputRequest * CreatePartnerInputResponse::request() const
{
    Q_D(const CreatePartnerInputResponse);
    return static_cast<const CreatePartnerInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive CreatePartnerInput \a response.
 */
void CreatePartnerInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePartnerInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CreatePartnerInputResponsePrivate
 * \brief The CreatePartnerInputResponsePrivate class provides private implementation for CreatePartnerInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreatePartnerInputResponsePrivate object with public implementation \a q.
 */
CreatePartnerInputResponsePrivate::CreatePartnerInputResponsePrivate(
    CreatePartnerInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CreatePartnerInput response element from \a xml.
 */
void CreatePartnerInputResponsePrivate::parseCreatePartnerInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePartnerInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
