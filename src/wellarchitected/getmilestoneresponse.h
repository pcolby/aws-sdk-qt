// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMILESTONERESPONSE_H
#define QTAWS_GETMILESTONERESPONSE_H

#include "wellarchitectedresponse.h"
#include "getmilestonerequest.h"

namespace QtAws {
namespace WellArchitected {

class GetMilestoneResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT GetMilestoneResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    GetMilestoneResponse(const GetMilestoneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMilestoneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMilestoneResponse)
    Q_DISABLE_COPY(GetMilestoneResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
