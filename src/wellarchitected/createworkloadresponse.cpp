// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkloadresponse.h"
#include "createworkloadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateWorkloadResponse
 * \brief The CreateWorkloadResponse class provides an interace for WellArchitected CreateWorkload responses.
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
 * \sa WellArchitectedClient::createWorkload
 */

/*!
 * Constructs a CreateWorkloadResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkloadResponse::CreateWorkloadResponse(
        const CreateWorkloadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new CreateWorkloadResponsePrivate(this), parent)
{
    setRequest(new CreateWorkloadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkloadRequest * CreateWorkloadResponse::request() const
{
    Q_D(const CreateWorkloadResponse);
    return static_cast<const CreateWorkloadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected CreateWorkload \a response.
 */
void CreateWorkloadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkloadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::CreateWorkloadResponsePrivate
 * \brief The CreateWorkloadResponsePrivate class provides private implementation for CreateWorkloadResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateWorkloadResponsePrivate object with public implementation \a q.
 */
CreateWorkloadResponsePrivate::CreateWorkloadResponsePrivate(
    CreateWorkloadResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected CreateWorkload response element from \a xml.
 */
void CreateWorkloadResponsePrivate::parseCreateWorkloadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkloadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
