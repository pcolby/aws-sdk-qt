// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTKEYPAIRRESPONSE_P_H
#define QTAWS_IMPORTKEYPAIRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ImportKeyPairResponse;

class ImportKeyPairResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ImportKeyPairResponsePrivate(ImportKeyPairResponse * const q);

    void parseImportKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportKeyPairResponse)
    Q_DISABLE_COPY(ImportKeyPairResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
