// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMERESPONSE_H
#define QTAWS_CREATEVOLUMERESPONSE_H

#include "fsxresponse.h"
#include "createvolumerequest.h"

namespace QtAws {
namespace FSx {

class CreateVolumeResponsePrivate;

class QTAWSFSX_EXPORT CreateVolumeResponse : public FSxResponse {
    Q_OBJECT

public:
    CreateVolumeResponse(const CreateVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVolumeResponse)
    Q_DISABLE_COPY(CreateVolumeResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
