// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkloadshareresponse.h"
#include "createworkloadshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateWorkloadShareResponse
 * \brief The CreateWorkloadShareResponse class provides an interace for WellArchitected CreateWorkloadShare responses.
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
 * \sa WellArchitectedClient::createWorkloadShare
 */

/*!
 * Constructs a CreateWorkloadShareResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkloadShareResponse::CreateWorkloadShareResponse(
        const CreateWorkloadShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new CreateWorkloadShareResponsePrivate(this), parent)
{
    setRequest(new CreateWorkloadShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkloadShareRequest * CreateWorkloadShareResponse::request() const
{
    Q_D(const CreateWorkloadShareResponse);
    return static_cast<const CreateWorkloadShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected CreateWorkloadShare \a response.
 */
void CreateWorkloadShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkloadShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::CreateWorkloadShareResponsePrivate
 * \brief The CreateWorkloadShareResponsePrivate class provides private implementation for CreateWorkloadShareResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateWorkloadShareResponsePrivate object with public implementation \a q.
 */
CreateWorkloadShareResponsePrivate::CreateWorkloadShareResponsePrivate(
    CreateWorkloadShareResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected CreateWorkloadShare response element from \a xml.
 */
void CreateWorkloadShareResponsePrivate::parseCreateWorkloadShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkloadShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
