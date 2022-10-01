// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlensshareresponse.h"
#include "createlensshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateLensShareResponse
 * \brief The CreateLensShareResponse class provides an interace for WellArchitected CreateLensShare responses.
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
 * \sa WellArchitectedClient::createLensShare
 */

/*!
 * Constructs a CreateLensShareResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLensShareResponse::CreateLensShareResponse(
        const CreateLensShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new CreateLensShareResponsePrivate(this), parent)
{
    setRequest(new CreateLensShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLensShareRequest * CreateLensShareResponse::request() const
{
    Q_D(const CreateLensShareResponse);
    return static_cast<const CreateLensShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected CreateLensShare \a response.
 */
void CreateLensShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLensShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::CreateLensShareResponsePrivate
 * \brief The CreateLensShareResponsePrivate class provides private implementation for CreateLensShareResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateLensShareResponsePrivate object with public implementation \a q.
 */
CreateLensShareResponsePrivate::CreateLensShareResponsePrivate(
    CreateLensShareResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected CreateLensShare response element from \a xml.
 */
void CreateLensShareResponsePrivate::parseCreateLensShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLensShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
