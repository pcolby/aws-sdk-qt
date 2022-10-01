// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORCERTIFICATERESPONSE_P_H
#define QTAWS_LISTTAGSFORCERTIFICATERESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class ListTagsForCertificateResponse;

class ListTagsForCertificateResponsePrivate : public AcmResponsePrivate {

public:

    explicit ListTagsForCertificateResponsePrivate(ListTagsForCertificateResponse * const q);

    void parseListTagsForCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForCertificateResponse)
    Q_DISABLE_COPY(ListTagsForCertificateResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
