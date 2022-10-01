// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTVOLUMERESPONSE_H
#define QTAWS_IMPORTVOLUMERESPONSE_H

#include "ec2response.h"
#include "importvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class ImportVolumeResponsePrivate;

class QTAWSEC2_EXPORT ImportVolumeResponse : public Ec2Response {
    Q_OBJECT

public:
    ImportVolumeResponse(const ImportVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportVolumeResponse)
    Q_DISABLE_COPY(ImportVolumeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
