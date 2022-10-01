// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESHARERESPONSE_H
#define QTAWS_CREATERESOURCESHARERESPONSE_H

#include "ramresponse.h"
#include "createresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class CreateResourceShareResponsePrivate;

class QTAWSRAM_EXPORT CreateResourceShareResponse : public RamResponse {
    Q_OBJECT

public:
    CreateResourceShareResponse(const CreateResourceShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourceShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceShareResponse)
    Q_DISABLE_COPY(CreateResourceShareResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
