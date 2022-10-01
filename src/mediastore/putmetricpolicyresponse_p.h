// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICPOLICYRESPONSE_P_H
#define QTAWS_PUTMETRICPOLICYRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class PutMetricPolicyResponse;

class PutMetricPolicyResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit PutMetricPolicyResponsePrivate(PutMetricPolicyResponse * const q);

    void parsePutMetricPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMetricPolicyResponse)
    Q_DISABLE_COPY(PutMetricPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
