// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESHARERESPONSE_H
#define QTAWS_UPDATERESOURCESHARERESPONSE_H

#include "ramresponse.h"
#include "updateresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class UpdateResourceShareResponsePrivate;

class QTAWSRAM_EXPORT UpdateResourceShareResponse : public RamResponse {
    Q_OBJECT

public:
    UpdateResourceShareResponse(const UpdateResourceShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResourceShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceShareResponse)
    Q_DISABLE_COPY(UpdateResourceShareResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
