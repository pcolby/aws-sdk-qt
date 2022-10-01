// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOLUTIONRESPONSE_P_H
#define QTAWS_CREATESOLUTIONRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class CreateSolutionResponse;

class CreateSolutionResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit CreateSolutionResponsePrivate(CreateSolutionResponse * const q);

    void parseCreateSolutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSolutionResponse)
    Q_DISABLE_COPY(CreateSolutionResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
