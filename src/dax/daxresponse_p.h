// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DAXRESPONSE_P_H
#define QTAWS_DAXRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Dax {

class DaxResponse;

class DaxResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DaxResponsePrivate(DaxResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DaxResponse)
    Q_DISABLE_COPY(DaxResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
