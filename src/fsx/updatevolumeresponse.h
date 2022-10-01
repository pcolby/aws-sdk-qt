// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOLUMERESPONSE_H
#define QTAWS_UPDATEVOLUMERESPONSE_H

#include "fsxresponse.h"
#include "updatevolumerequest.h"

namespace QtAws {
namespace FSx {

class UpdateVolumeResponsePrivate;

class QTAWSFSX_EXPORT UpdateVolumeResponse : public FSxResponse {
    Q_OBJECT

public:
    UpdateVolumeResponse(const UpdateVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVolumeResponse)
    Q_DISABLE_COPY(UpdateVolumeResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
