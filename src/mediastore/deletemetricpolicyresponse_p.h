// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICPOLICYRESPONSE_P_H
#define QTAWS_DELETEMETRICPOLICYRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class DeleteMetricPolicyResponse;

class DeleteMetricPolicyResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit DeleteMetricPolicyResponsePrivate(DeleteMetricPolicyResponse * const q);

    void parseDeleteMetricPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMetricPolicyResponse)
    Q_DISABLE_COPY(DeleteMetricPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
