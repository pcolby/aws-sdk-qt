// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLACEROOTVOLUMETASKRESPONSE_P_H
#define QTAWS_CREATEREPLACEROOTVOLUMETASKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateReplaceRootVolumeTaskResponse;

class CreateReplaceRootVolumeTaskResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateReplaceRootVolumeTaskResponsePrivate(CreateReplaceRootVolumeTaskResponse * const q);

    void parseCreateReplaceRootVolumeTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReplaceRootVolumeTaskResponse)
    Q_DISABLE_COPY(CreateReplaceRootVolumeTaskResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
