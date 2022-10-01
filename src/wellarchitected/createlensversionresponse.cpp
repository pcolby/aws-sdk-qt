// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlensversionresponse.h"
#include "createlensversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateLensVersionResponse
 * \brief The CreateLensVersionResponse class provides an interace for WellArchitected CreateLensVersion responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::createLensVersion
 */

/*!
 * Constructs a CreateLensVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLensVersionResponse::CreateLensVersionResponse(
        const CreateLensVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new CreateLensVersionResponsePrivate(this), parent)
{
    setRequest(new CreateLensVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLensVersionRequest * CreateLensVersionResponse::request() const
{
    Q_D(const CreateLensVersionResponse);
    return static_cast<const CreateLensVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected CreateLensVersion \a response.
 */
void CreateLensVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLensVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::CreateLensVersionResponsePrivate
 * \brief The CreateLensVersionResponsePrivate class provides private implementation for CreateLensVersionResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateLensVersionResponsePrivate object with public implementation \a q.
 */
CreateLensVersionResponsePrivate::CreateLensVersionResponsePrivate(
    CreateLensVersionResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected CreateLensVersion response element from \a xml.
 */
void CreateLensVersionResponsePrivate::parseCreateLensVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLensVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
