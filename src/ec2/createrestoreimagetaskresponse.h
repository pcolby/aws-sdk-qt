// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESTOREIMAGETASKRESPONSE_H
#define QTAWS_CREATERESTOREIMAGETASKRESPONSE_H

#include "ec2response.h"
#include "createrestoreimagetaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateRestoreImageTaskResponsePrivate;

class QTAWSEC2_EXPORT CreateRestoreImageTaskResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateRestoreImageTaskResponse(const CreateRestoreImageTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRestoreImageTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRestoreImageTaskResponse)
    Q_DISABLE_COPY(CreateRestoreImageTaskResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
