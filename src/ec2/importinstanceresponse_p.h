// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTINSTANCERESPONSE_P_H
#define QTAWS_IMPORTINSTANCERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ImportInstanceResponse;

class ImportInstanceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ImportInstanceResponsePrivate(ImportInstanceResponse * const q);

    void parseImportInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportInstanceResponse)
    Q_DISABLE_COPY(ImportInstanceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
