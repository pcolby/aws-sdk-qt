// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATERESPONSE_P_H
#define QTAWS_TRANSLATERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Translate {

class TranslateResponse;

class TranslateResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit TranslateResponsePrivate(TranslateResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TranslateResponse)
    Q_DISABLE_COPY(TranslateResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
