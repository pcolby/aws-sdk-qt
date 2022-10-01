// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXONTAPRESPONSE_H
#define QTAWS_CREATELOCATIONFSXONTAPRESPONSE_H

#include "datasyncresponse.h"
#include "createlocationfsxontaprequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxOntapResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationFsxOntapResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationFsxOntapResponse(const CreateLocationFsxOntapRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationFsxOntapRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationFsxOntapResponse)
    Q_DISABLE_COPY(CreateLocationFsxOntapResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
