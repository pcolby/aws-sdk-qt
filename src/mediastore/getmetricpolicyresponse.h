// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICPOLICYRESPONSE_H
#define QTAWS_GETMETRICPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "getmetricpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class GetMetricPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT GetMetricPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    GetMetricPolicyResponse(const GetMetricPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetricPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricPolicyResponse)
    Q_DISABLE_COPY(GetMetricPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
