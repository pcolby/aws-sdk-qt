// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKLOADSHARERESPONSE_H
#define QTAWS_CREATEWORKLOADSHARERESPONSE_H

#include "wellarchitectedresponse.h"
#include "createworkloadsharerequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateWorkloadShareResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateWorkloadShareResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    CreateWorkloadShareResponse(const CreateWorkloadShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkloadShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkloadShareResponse)
    Q_DISABLE_COPY(CreateWorkloadShareResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
