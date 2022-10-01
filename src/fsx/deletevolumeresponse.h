// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOLUMERESPONSE_H
#define QTAWS_DELETEVOLUMERESPONSE_H

#include "fsxresponse.h"
#include "deletevolumerequest.h"

namespace QtAws {
namespace FSx {

class DeleteVolumeResponsePrivate;

class QTAWSFSX_EXPORT DeleteVolumeResponse : public FSxResponse {
    Q_OBJECT

public:
    DeleteVolumeResponse(const DeleteVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVolumeResponse)
    Q_DISABLE_COPY(DeleteVolumeResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
