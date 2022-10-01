// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DLMRESPONSE_P_H
#define QTAWS_DLMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Dlm {

class DlmResponse;

class DlmResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DlmResponsePrivate(DlmResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DlmResponse)
    Q_DISABLE_COPY(DlmResponsePrivate)

};

} // namespace Dlm
} // namespace QtAws

#endif
