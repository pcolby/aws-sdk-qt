// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KENDRARESPONSE_P_H
#define QTAWS_KENDRARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Kendra {

class KendraResponse;

class KendraResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KendraResponsePrivate(KendraResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KendraResponse)
    Q_DISABLE_COPY(KendraResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
