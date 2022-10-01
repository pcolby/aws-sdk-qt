// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICPOLICYRESPONSE_P_H
#define QTAWS_GETMETRICPOLICYRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class GetMetricPolicyResponse;

class GetMetricPolicyResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit GetMetricPolicyResponsePrivate(GetMetricPolicyResponse * const q);

    void parseGetMetricPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMetricPolicyResponse)
    Q_DISABLE_COPY(GetMetricPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
