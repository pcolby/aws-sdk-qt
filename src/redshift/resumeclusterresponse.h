// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECLUSTERRESPONSE_H
#define QTAWS_RESUMECLUSTERRESPONSE_H

#include "redshiftresponse.h"
#include "resumeclusterrequest.h"

namespace QtAws {
namespace Redshift {

class ResumeClusterResponsePrivate;

class QTAWSREDSHIFT_EXPORT ResumeClusterResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ResumeClusterResponse(const ResumeClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResumeClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeClusterResponse)
    Q_DISABLE_COPY(ResumeClusterResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
