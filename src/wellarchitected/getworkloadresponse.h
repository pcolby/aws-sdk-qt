// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKLOADRESPONSE_H
#define QTAWS_GETWORKLOADRESPONSE_H

#include "wellarchitectedresponse.h"
#include "getworkloadrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetWorkloadResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT GetWorkloadResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    GetWorkloadResponse(const GetWorkloadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkloadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkloadResponse)
    Q_DISABLE_COPY(GetWorkloadResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
