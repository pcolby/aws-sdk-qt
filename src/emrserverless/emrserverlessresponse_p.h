// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRSERVERLESSRESPONSE_P_H
#define QTAWS_EMRSERVERLESSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace EmrServerless {

class EmrServerlessResponse;

class EmrServerlessResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EmrServerlessResponsePrivate(EmrServerlessResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EmrServerlessResponse)
    Q_DISABLE_COPY(EmrServerlessResponsePrivate)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
