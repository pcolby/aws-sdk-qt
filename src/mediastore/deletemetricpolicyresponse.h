// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICPOLICYRESPONSE_H
#define QTAWS_DELETEMETRICPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "deletemetricpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteMetricPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT DeleteMetricPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    DeleteMetricPolicyResponse(const DeleteMetricPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMetricPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMetricPolicyResponse)
    Q_DISABLE_COPY(DeleteMetricPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
