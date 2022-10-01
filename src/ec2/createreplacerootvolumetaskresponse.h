// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLACEROOTVOLUMETASKRESPONSE_H
#define QTAWS_CREATEREPLACEROOTVOLUMETASKRESPONSE_H

#include "ec2response.h"
#include "createreplacerootvolumetaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateReplaceRootVolumeTaskResponsePrivate;

class QTAWSEC2_EXPORT CreateReplaceRootVolumeTaskResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateReplaceRootVolumeTaskResponse(const CreateReplaceRootVolumeTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReplaceRootVolumeTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplaceRootVolumeTaskResponse)
    Q_DISABLE_COPY(CreateReplaceRootVolumeTaskResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
