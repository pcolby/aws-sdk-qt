// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREIMAGEFROMRECYCLEBINRESPONSE_P_H
#define QTAWS_RESTOREIMAGEFROMRECYCLEBINRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RestoreImageFromRecycleBinResponse;

class RestoreImageFromRecycleBinResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RestoreImageFromRecycleBinResponsePrivate(RestoreImageFromRecycleBinResponse * const q);

    void parseRestoreImageFromRecycleBinResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreImageFromRecycleBinResponse)
    Q_DISABLE_COPY(RestoreImageFromRecycleBinResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
