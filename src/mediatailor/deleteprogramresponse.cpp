// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprogramresponse.h"
#include "deleteprogramresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeleteProgramResponse
 * \brief The DeleteProgramResponse class provides an interace for MediaTailor DeleteProgram responses.
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
 * \sa MediaTailorClient::deleteProgram
 */

/*!
 * Constructs a DeleteProgramResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProgramResponse::DeleteProgramResponse(
        const DeleteProgramRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new DeleteProgramResponsePrivate(this), parent)
{
    setRequest(new DeleteProgramRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProgramRequest * DeleteProgramResponse::request() const
{
    Q_D(const DeleteProgramResponse);
    return static_cast<const DeleteProgramRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor DeleteProgram \a response.
 */
void DeleteProgramResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProgramResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::DeleteProgramResponsePrivate
 * \brief The DeleteProgramResponsePrivate class provides private implementation for DeleteProgramResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeleteProgramResponsePrivate object with public implementation \a q.
 */
DeleteProgramResponsePrivate::DeleteProgramResponsePrivate(
    DeleteProgramResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor DeleteProgram response element from \a xml.
 */
void DeleteProgramResponsePrivate::parseDeleteProgramResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProgramResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
