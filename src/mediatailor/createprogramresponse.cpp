// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprogramresponse.h"
#include "createprogramresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::CreateProgramResponse
 * \brief The CreateProgramResponse class provides an interace for MediaTailor CreateProgram responses.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::createProgram
 */

/*!
 * Constructs a CreateProgramResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProgramResponse::CreateProgramResponse(
        const CreateProgramRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new CreateProgramResponsePrivate(this), parent)
{
    setRequest(new CreateProgramRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProgramRequest * CreateProgramResponse::request() const
{
    Q_D(const CreateProgramResponse);
    return static_cast<const CreateProgramRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor CreateProgram \a response.
 */
void CreateProgramResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProgramResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::CreateProgramResponsePrivate
 * \brief The CreateProgramResponsePrivate class provides private implementation for CreateProgramResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a CreateProgramResponsePrivate object with public implementation \a q.
 */
CreateProgramResponsePrivate::CreateProgramResponsePrivate(
    CreateProgramResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor CreateProgram response element from \a xml.
 */
void CreateProgramResponsePrivate::parseCreateProgramResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProgramResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
