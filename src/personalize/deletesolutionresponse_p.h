// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOLUTIONRESPONSE_P_H
#define QTAWS_DELETESOLUTIONRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DeleteSolutionResponse;

class DeleteSolutionResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DeleteSolutionResponsePrivate(DeleteSolutionResponse * const q);

    void parseDeleteSolutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSolutionResponse)
    Q_DISABLE_COPY(DeleteSolutionResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
