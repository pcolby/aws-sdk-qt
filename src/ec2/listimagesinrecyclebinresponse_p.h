// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESINRECYCLEBINRESPONSE_P_H
#define QTAWS_LISTIMAGESINRECYCLEBINRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ListImagesInRecycleBinResponse;

class ListImagesInRecycleBinResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ListImagesInRecycleBinResponsePrivate(ListImagesInRecycleBinResponse * const q);

    void parseListImagesInRecycleBinResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImagesInRecycleBinResponse)
    Q_DISABLE_COPY(ListImagesInRecycleBinResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
