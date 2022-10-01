// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICPOLICYRESPONSE_H
#define QTAWS_PUTMETRICPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "putmetricpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class PutMetricPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT PutMetricPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    PutMetricPolicyResponse(const PutMetricPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMetricPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetricPolicyResponse)
    Q_DISABLE_COPY(PutMetricPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
