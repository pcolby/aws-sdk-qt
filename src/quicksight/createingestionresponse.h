// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINGESTIONRESPONSE_H
#define QTAWS_CREATEINGESTIONRESPONSE_H

#include "quicksightresponse.h"
#include "createingestionrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateIngestionResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateIngestionResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateIngestionResponse(const CreateIngestionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIngestionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIngestionResponse)
    Q_DISABLE_COPY(CreateIngestionResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
