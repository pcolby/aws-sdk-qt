// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmilestoneresponse.h"
#include "createmilestoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateMilestoneResponse
 * \brief The CreateMilestoneResponse class provides an interace for WellArchitected CreateMilestone responses.
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
 * \sa WellArchitectedClient::createMilestone
 */

/*!
 * Constructs a CreateMilestoneResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMilestoneResponse::CreateMilestoneResponse(
        const CreateMilestoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new CreateMilestoneResponsePrivate(this), parent)
{
    setRequest(new CreateMilestoneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMilestoneRequest * CreateMilestoneResponse::request() const
{
    Q_D(const CreateMilestoneResponse);
    return static_cast<const CreateMilestoneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected CreateMilestone \a response.
 */
void CreateMilestoneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMilestoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::CreateMilestoneResponsePrivate
 * \brief The CreateMilestoneResponsePrivate class provides private implementation for CreateMilestoneResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateMilestoneResponsePrivate object with public implementation \a q.
 */
CreateMilestoneResponsePrivate::CreateMilestoneResponsePrivate(
    CreateMilestoneResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected CreateMilestone response element from \a xml.
 */
void CreateMilestoneResponsePrivate::parseCreateMilestoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMilestoneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
