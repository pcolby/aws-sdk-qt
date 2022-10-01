// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMILESTONERESPONSE_H
#define QTAWS_CREATEMILESTONERESPONSE_H

#include "wellarchitectedresponse.h"
#include "createmilestonerequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateMilestoneResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateMilestoneResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    CreateMilestoneResponse(const CreateMilestoneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMilestoneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMilestoneResponse)
    Q_DISABLE_COPY(CreateMilestoneResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
