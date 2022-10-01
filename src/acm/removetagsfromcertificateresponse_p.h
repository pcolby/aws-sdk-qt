// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMCERTIFICATERESPONSE_P_H
#define QTAWS_REMOVETAGSFROMCERTIFICATERESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class RemoveTagsFromCertificateResponse;

class RemoveTagsFromCertificateResponsePrivate : public AcmResponsePrivate {

public:

    explicit RemoveTagsFromCertificateResponsePrivate(RemoveTagsFromCertificateResponse * const q);

    void parseRemoveTagsFromCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromCertificateResponse)
    Q_DISABLE_COPY(RemoveTagsFromCertificateResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
