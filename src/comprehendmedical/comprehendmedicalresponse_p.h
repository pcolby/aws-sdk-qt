// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDMEDICALRESPONSE_P_H
#define QTAWS_COMPREHENDMEDICALRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class ComprehendMedicalResponse;

class ComprehendMedicalResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ComprehendMedicalResponsePrivate(ComprehendMedicalResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ComprehendMedicalResponse)
    Q_DISABLE_COPY(ComprehendMedicalResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
